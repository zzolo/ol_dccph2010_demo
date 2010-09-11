<?php

/**
 * Implementation of hook_views_default_views().
 */
function ol_dccph2010_demo_feature_views_default_views() {
  $views = array();

  // Exported view: ol_demo_data_overlays
  $view = new view;
  $view->name = 'ol_demo_data_overlays';
  $view->description = 'OL Demo > Data Overlays';
  $view->tag = 'ol_demo';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_ol_demo_location_openlayers_wkt' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'openlayers_wkt',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ol_demo_location_openlayers_wkt',
      'table' => 'node_data_field_ol_demo_location',
      'field' => 'field_ol_demo_location_openlayers_wkt',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'teaser' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'teaser',
      'table' => 'node_revisions',
      'field' => 'teaser',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'OL Demo > Data Overlays');
  $handler->override_option('style_plugin', 'openlayers_data');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'data_source' => array(
      'value' => array(
        'openlayers_wkt' => 'openlayers_wkt',
      ),
      'other_lat' => 'field_ol_demo_location_openlayers_wkt',
      'other_lon' => 'field_ol_demo_location_openlayers_wkt',
      'openlayers_wkt' => 'field_ol_demo_location_openlayers_wkt',
      'other_top' => 'field_ol_demo_location_openlayers_wkt',
      'other_right' => 'field_ol_demo_location_openlayers_wkt',
      'other_bottom' => 'field_ol_demo_location_openlayers_wkt',
      'other_left' => 'field_ol_demo_location_openlayers_wkt',
      'name_field' => 'title',
      'description_field' => 'teaser',
    ),
  ));
  $handler = $view->new_display('openlayers', 'OL Demo > Data Overlay > POI', 'openlayers_1');
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'ol_demo_poi' => 'ol_demo_poi',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'OL Demo > Data Overlays > POI');
  $handler->override_option('row_plugin', '');
  $handler->override_option('displays', array());
  $handler = $view->new_display('openlayers', 'OL Demo > Data Overlays > Airports', 'openlayers_2');
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'ol_demo_airports' => 'ol_demo_airports',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'OL Demo > Data Overlays > Airports');
  $handler->override_option('row_plugin', '');
  $handler->override_option('displays', array());

  $views[$view->name] = $view;

  // Exported view: ol_demo_map_displays
  $view = new view;
  $view->name = 'ol_demo_map_displays';
  $view->description = 'OL Demo > Map Displays';
  $view->tag = 'ol_demo';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'OL Demo > Map DIsplays');
  $handler->override_option('style_plugin', 'openlayers_map');
  $handler->override_option('style_options', array(
    'preset' => 'ol_demo_map_base',
  ));
  $handler->override_option('row_plugin', 'node');
  $handler = $view->new_display('page', 'OL Demo > Map Displays > Basic Map', 'page_1');
  $handler->override_option('title', 'OL Demo > Map Basic');
  $handler->override_option('style_options', array(
    'preset' => 'ol_demo_map_basic',
  ));
  $handler->override_option('path', 'map/basic');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'OL Demo > Map Displays > GeoRSS Map', 'page_2');
  $handler->override_option('title', 'OL Demo > GeoRSS Example');
  $handler->override_option('style_options', array(
    'preset' => 'ol_demo_georss_example',
  ));
  $handler->override_option('path', 'map/georss');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'OL Demo > Map Displays > Behaviors Example', 'page_3');
  $handler->override_option('title', 'OL Demo > Behaviors');
  $handler->override_option('style_options', array(
    'preset' => 'ol_demo_map_behaviors',
  ));
  $handler->override_option('path', 'map/behaviors');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'OL Demo > Map Displays > Data Overlays', 'page_4');
  $handler->override_option('title', 'OL Demo > Data Overlays');
  $handler->override_option('style_options', array(
    'preset' => 'ol_demo_map_data_overlays',
  ));
  $handler->override_option('path', 'map/data_overlays');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'OL Demo > Map Displays > MapBox', 'page_5');
  $handler->override_option('title', 'OL Demo > MapBox');
  $handler->override_option('style_options', array(
    'preset' => 'ol_demo_mapbox_haiti',
  ));
  $handler->override_option('path', 'map/mapbox');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'OL Demo > Map Displays > Full Example', 'page_6');
  $handler->override_option('title', 'OL Demo > Full Example');
  $handler->override_option('style_options', array(
    'preset' => 'ol_demo_map_example_full',
  ));
  $handler->override_option('path', 'map/example_full');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
