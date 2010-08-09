<?php

/**
 * Implementation of hook_strongarm().
 */
function ol_dccph2010_demo_input_poi_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ol_demo_poi';
  $strongarm->value = 0;

  $export['comment_anonymous_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ol_demo_poi';
  $strongarm->value = '3';

  $export['comment_controls_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ol_demo_poi';
  $strongarm->value = '4';

  $export['comment_default_mode_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ol_demo_poi';
  $strongarm->value = '1';

  $export['comment_default_order_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ol_demo_poi';
  $strongarm->value = '50';

  $export['comment_default_per_page_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ol_demo_poi';
  $strongarm->value = '0';

  $export['comment_form_location_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ol_demo_poi';
  $strongarm->value = '2';

  $export['comment_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ol_demo_poi';
  $strongarm->value = '1';

  $export['comment_preview_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ol_demo_poi';
  $strongarm->value = '1';

  $export['comment_subject_field_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ol_demo_poi';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'comment_settings' => '2',
    'menu' => '-2',
  );

  $export['content_extra_weights_ol_demo_poi'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ol_demo_poi';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_ol_demo_poi'] = $strongarm;
  return $export;
}
