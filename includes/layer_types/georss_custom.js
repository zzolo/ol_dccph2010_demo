// $Id$

/**
 * @file
 * Layer handler for GeoRSS layers
 */

/**
 * Openlayer layer handler for GeoRSS layer
 */
Drupal.openlayers.layer.georss_custom = function(title, map, options) {
  var styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
  if (options.maxExtent !== undefined) {
    options.maxExtent = new OpenLayers.Bounds.fromArray(options.maxExtent) || new OpenLayers.Bounds(-20037508.34, -20037508.34, 20037508.34, 20037508.34);
  }
  var layer = new OpenLayers.Layer.GeoRSS(title, options.url);
  layer.styleMap = styleMap;
  return layer;
};
