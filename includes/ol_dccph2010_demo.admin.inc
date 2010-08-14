<?php
// $Id$

/**
 * @file
 * Function for the administrative settings of the OL Demo module.
 */

/**
 * Administrative settings form for OL Demo.
 */
function ol_dccph2010_demo_admin_form($form_state) {
  $form = array();
  
  $form['ol_dccph2010_demo_local_osm_layer'] = array(
    '#type' => 'textfield',
    '#title' => t('OSM Local Layer'),
    '#description' => t('By setting this to a OSM type URL template,
      this demo will use this instead of the default OSM layer that
      pulls from the internet.  This is important if you do not have
      internet access.  You will have to download the tiles to your
      local machine.  There is a PHP script to help with that, but
      it is very basic.  An example for this would be: %url', array(
        '%url' => 'http://localhost:8888/osm/${z}/${x}/${y}.png',
      )
    ),
    '#default_value' => variable_get('ol_dccph2010_demo_local_osm_layer', ''),
  );
  
  return system_settings_form($form);
}