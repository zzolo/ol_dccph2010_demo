<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function ol_dccph2010_demo_feature_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_georss_example';
  $openlayers_presets->title = 'OL Demo > GeoRSS Example';
  $openlayers_presets->description = 'This map is used for the GeoRSS example.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577972411611, 55.674970961776',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '1377089.50134,7468604.704635,1428913.806508,7511715.18858',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
      'ol_demo_georss_dccph_example' => 'ol_demo_georss_dccph_example',
    ),
    'layer_styles' => array(
      'ol_demo_georss_dccph_example' => 'ol_demo_style_input',
    ),
    'layer_activated' => array(
      'ol_demo_georss_dccph_example' => 'ol_demo_georss_dccph_example',
    ),
    'layer_switcher' => array(
      'ol_demo_georss_dccph_example' => 'ol_demo_georss_dccph_example',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_input',
      'select' => 'ol_demo_style_input',
      'temporary' => 'ol_demo_style_input',
    ),
  );

  $export['ol_demo_georss_example'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_map_base';
  $openlayers_presets->title = 'OL Demo > Map Base';
  $openlayers_presets->description = 'This map is used as a base for other maps as it has settings already configured.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577972411611, 55.674970961776',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '1377089.50134,7468604.704635,1428913.806508,7511715.18858',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_input',
      'select' => 'ol_demo_style_input',
      'temporary' => 'ol_demo_style_input',
    ),
  );

  $export['ol_demo_map_base'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_map_basic';
  $openlayers_presets->title = 'OL Demo > Map Basic';
  $openlayers_presets->description = 'This map is used as a very basic example of map presets.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577972411611, 55.674970961776',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '1377089.50134,7468604.704635,1428913.806508,7511715.18858',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_input',
      'select' => 'ol_demo_style_input',
      'temporary' => 'ol_demo_style_input',
    ),
  );

  $export['ol_demo_map_basic'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_map_behaviors';
  $openlayers_presets->title = 'OL Demo > Behaviors Example';
  $openlayers_presets->description = 'This map is used to example various behaviors.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577972411611, 55.674970961776',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '1377089.50134,7468604.704635,1428913.806508,7511715.18858',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_permalink' => array(),
      'openlayers_behavior_scaleline' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_input',
      'select' => 'ol_demo_style_input',
      'temporary' => 'ol_demo_style_input',
    ),
  );

  $export['ol_demo_map_behaviors'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_map_data_overlays';
  $openlayers_presets->title = 'OL Demo > Data Overlays';
  $openlayers_presets->description = 'This map is used as an example of data overlays.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577972411611, 55.674970961776',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '1377089.50134,7468604.704635,1428913.806508,7511715.18858',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'ol_demo_data_overlays_openlayers_1' => 'ol_demo_data_overlays_openlayers_1',
          'ol_demo_data_overlays_openlayers_2' => 'ol_demo_data_overlays_openlayers_2',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
      'ol_demo_data_overlays_openlayers_1' => 'ol_demo_data_overlays_openlayers_1',
      'ol_demo_data_overlays_openlayers_2' => 'ol_demo_data_overlays_openlayers_2',
    ),
    'layer_styles' => array(
      'ol_demo_data_overlays_openlayers_1' => 'ol_demo_style_drupal',
      'ol_demo_data_overlays_openlayers_2' => 'ol_demo_style_airport',
    ),
    'layer_activated' => array(
      'ol_demo_data_overlays_openlayers_1' => 'ol_demo_data_overlays_openlayers_1',
      'ol_demo_data_overlays_openlayers_2' => 'ol_demo_data_overlays_openlayers_2',
    ),
    'layer_switcher' => array(
      'ol_demo_data_overlays_openlayers_1' => 'ol_demo_data_overlays_openlayers_1',
      'ol_demo_data_overlays_openlayers_2' => 'ol_demo_data_overlays_openlayers_2',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_input',
      'select' => 'ol_demo_style_input',
      'temporary' => 'ol_demo_style_input',
    ),
  );

  $export['ol_demo_map_data_overlays'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_map_input';
  $openlayers_presets->title = 'OL Demo > Input Map';
  $openlayers_presets->description = 'This map is used for CCK input with OL WKT field.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577285766104, 55.683391446255',
        'zoom' => '11',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(),
      'openlayers_behavior_mouseposition' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_input',
      'select' => 'ol_demo_style_select',
      'temporary' => 'ol_demo_style_select',
    ),
  );

  $export['ol_demo_map_input'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_map_input_display';
  $openlayers_presets->title = 'OL Demo > Input Map Display';
  $openlayers_presets->description = 'This map is used to display inputted points on nodes.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '300px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577972411611, 55.674970961776',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '1377089.50134,7468604.704635,1428913.806508,7511715.18858',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_input',
      'select' => 'ol_demo_style_input',
      'temporary' => 'ol_demo_style_input',
    ),
  );

  $export['ol_demo_map_input_display'] = $openlayers_presets;
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'ol_demo_map_input_display_airport';
  $openlayers_presets->title = 'OL Demo > Input Map Display > Airports';
  $openlayers_presets->description = 'This map is used to display inputted points on nodes for airport content types.';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '300px',
    'image_path' => drupal_get_path('module', 'ol_dccph2010_demo') . '/images/',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '12.577972411611, 55.674970961776',
        'zoom' => '10',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '1377089.50134,7468604.704635,1428913.806508,7511715.18858',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
      ),
      'openlayers_behavior_panzoom' => array(),
    ),
    'default_layer' => 'ol_dccph2010_demo_osm_mapnik',
    'layers' => array(
      'ol_dccph2010_demo_osm_mapnik' => 'ol_dccph2010_demo_osm_mapnik',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(),
    'layer_switcher' => array(),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'ol_demo_style_airport',
      'select' => 'ol_demo_style_airport',
      'temporary' => 'ol_demo_style_airport',
    ),
  );

  $export['ol_demo_map_input_display_airport'] = $openlayers_presets;
  return $export;
}
