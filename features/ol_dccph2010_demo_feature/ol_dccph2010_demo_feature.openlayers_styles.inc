<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function ol_dccph2010_demo_feature_openlayers_styles() {
  $export = array();
  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'ol_demo_style_airport';
  $openlayers_styles->title = 'OL Demo > Airport Style';
  $openlayers_styles->description = 'Style used for airport markers.';
  $openlayers_styles->data = array(
    'externalGraphic' => base_path() . drupal_get_path('module', 'ol_dccph2010_demo') . '/images/airport-google.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 32,
    'graphicHeight' => 37,
    'graphicOpacity' => 1,
  );

  $export['ol_demo_style_airport'] = $openlayers_styles;
  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'ol_demo_style_drupal';
  $openlayers_styles->title = 'OL Demo > Drupal Style';
  $openlayers_styles->description = 'Style used for Drupal markers.';
  $openlayers_styles->data = array(
    'externalGraphic' => base_path() . drupal_get_path('module', 'ol_dccph2010_demo') . '/images/druplicon.small.png',
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 22,
    'graphicHeight' => 25,
    'graphicOpacity' => 1,
  );

  $export['ol_demo_style_drupal'] = $openlayers_styles;
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
