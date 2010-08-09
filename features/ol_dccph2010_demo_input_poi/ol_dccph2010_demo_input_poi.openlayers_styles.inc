<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function ol_dccph2010_demo_input_poi_openlayers_styles() {
  $export = array();
  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'ol_demo_style_input';
  $openlayers_styles->title = 'OL Demo > Input Style';
  $openlayers_styles->description = 'Style used for CCK widget.';
  $openlayers_styles->data = array(
    'pointRadius' => 7,
    'fillColor' => '#222222',
    'strokeColor' => '#666666',
    'strokeWidth' => 4,
    'fillOpacity' => 0.85,
    'strokeOpacity' => 6,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
  );

  $export['ol_demo_style_input'] = $openlayers_styles;
  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'ol_demo_style_select';
  $openlayers_styles->title = 'OL Demo > Select Style';
  $openlayers_styles->description = 'Style used for selecting features on a map.';
  $openlayers_styles->data = array(
    'pointRadius' => 12,
    'fillColor' => '#222222',
    'strokeColor' => '#666666',
    'strokeWidth' => 15,
    'fillOpacity' => 0.9,
    'strokeOpacity' => 0.5,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
  );

  $export['ol_demo_style_select'] = $openlayers_styles;
  return $export;
}
