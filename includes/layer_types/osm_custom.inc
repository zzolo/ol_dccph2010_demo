<?php
// $Id$

/**
 * @file
 * OSM Layer Type
 * http://dev.openlayers.org/docs/files/OpenLayers/Layer/OSM-js.html
 */

/**
 * OpenLayers OSM Layer Type class
 */
class openlayers_layer_type_osm_custom extends openlayers_layer_type {
  function __construct($layer = array(), $map = array()) {
    parent::__construct($layer, $map);
    if (isset($this->data)) {
      $this->data += $this->options_init();
    }
    else {
      $this->data = $this->options_init();
    }
  }

  /**
   * Provide initial values for options.
   */
  function options_init() {
    return array(
      'layer_handler' => 'osm_custom',
      'baselayer' => TRUE,
      'projection' => array('900913'),
    );
  }

  /**
   * Options form which generates layers
   */
  function options_form() {
    return array(
      'url' => array(
        '#type' => 'textfield',
        '#title' => t('Base URL (template)'),
        '#default_value' => isset($this->data['base_url']) ?
          $this->data['base_url'] : ''
      ),
      'layer_type' => array(
        '#type' => 'hidden',
        '#value' => 'openlayers_layer_type_osm_custom'
      ),
    );
  }

  /**
   * Render.
   */
  function render(&$map) {
    drupal_add_js(drupal_get_path('module', 'ol_dccph2010_demo')
      . '/includes/layer_types/osm_custom.js');
    return $this->options;
  }
}
