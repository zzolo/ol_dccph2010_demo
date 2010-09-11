<?php

/**
 * Implementation of hook_openlayers_layers().
 */
function ol_dccph2010_demo_feature_openlayers_layers() {
  $export = array();
  $openlayers_layers = new stdClass;
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'ol_demo_georss_dccph_example';
  $openlayers_layers->title = 'OL Demo > GeoRSS DCCPH Map';
  $openlayers_layers->description = 'A GeoRSS example of the DCCPH 2010 Map feed.';
  $openlayers_layers->data = array(
    'url' => '/ol_dccph2010_demo/sites/all/modules/contrib/ol_dccph2010_demo/feeds/dccph2010-map.georss.xml',
    'layer_type' => 'openlayers_layer_type_georss_custom',
  );

  $export['ol_demo_georss_dccph_example'] = $openlayers_layers;
  return $export;
}
