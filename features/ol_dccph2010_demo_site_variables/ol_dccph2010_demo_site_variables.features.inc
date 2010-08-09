<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ol_dccph2010_demo_site_variables_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
