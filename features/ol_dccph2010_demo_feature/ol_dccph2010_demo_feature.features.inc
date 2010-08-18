<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ol_dccph2010_demo_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_presets") {
    return array("version" => 1);
  }
  elseif ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ol_dccph2010_demo_feature_node_info() {
  $items = array(
    'ol_demo_airports' => array(
      'name' => t('Airports'),
      'module' => 'features',
      'description' => t('This content types if for airports.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'ol_demo_poi' => array(
      'name' => t('Point of Interest'),
      'module' => 'features',
      'description' => t('This content type is specifically created to demo the input of data with OpenLayers CCK widget.  It is a general Point of Interest'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ol_dccph2010_demo_feature_views_api() {
  return array(
    'api' => '2',
  );
}
