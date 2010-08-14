<?php

/**
 * Algorithm borrowed form:
 * http://svn.openstreetmap.org/applications/utils/downloading/tiles_by_bbox/get.pl
 *
 * Denmark
 * NE 57.751949, 15.193240
 * SW 54.559132, 8.074720
 *
 * Copenhagen:
 * NE 55.741779, 12.685440
 * SW 55.610779, 12.452950
 */ 

retrieve();

function retrieve() {
  echo "Starting ...\n";
  
  $north = 55.741779;
  $south = 55.610779;
  $east = 12.685440;
  $west = 12.452950;
  $zoom_start = 2;
  $zoom_end = 18;
  $tile_server = "tile.openstreetmap.org";
  $path = './';
  
  for ($z = $zoom_start; $z <= $zoom_end; $z++) {
    // Figure out tile bounds
    $p = pow(2, $z);
    $y1 = (int) (lat_to_y($north) * $p);
    $y2 = (int) (lat_to_y($south) * $p);
    $x1 = (int) (lon_to_x($west) * $p);
    $x2 = (int) (lon_to_x($east) * $p);
  
    // Make sure we are sequential
    if ($x2 < $x1 || $y2 <= $y1) {
      echo "Bad coordinates ...\n";
      continue;
    }
    
    // Go though
    for ($y = $y1; $y <= $y2; $y++) {
      for ($x = $x1; $x <= $x2; $x++) {
        $url = sprintf("http://%s/%d/%d/%d.png", $tile_server, 
          $z, $x, $y);
        $new_path = sprintf("%d/%d/", $z, $x);
        $file = sprintf("%d/%d/%d.png", $z, $x, $y);
        
        // Make commands
        $make_dir = 'mkdir -p ' . $path . $new_path . "\n";
        $make_tile = 'wget -q -O ' . $path . $file . ' ' . $url . "\n";
        
        // Check for existing file
        if (file_exists($path . $file)) {
          echo 'Downloaded already: ' . $file . "\n";
        }
        else {
          echo $make_tile;
          exec($make_dir, $output, $ret);
          exec($make_tile, $output, $ret);
        }
      }
    }
  }
}

function lon_to_x($lon) {
  return(($lon + 180.0) / 360.0);
}

function lat_to_y($lat) {
  $limit_y = project_f(85.0511);
  $y= project_f($lat);
  $py = ($limit_y - $y) / (2 * $limit_y);
  return($py);
}

function project_f($lat) {
  $lat *= 0.0174532925;
  $y = log(tan($lat) + (1 / cos($lat)));
  return($y);
}