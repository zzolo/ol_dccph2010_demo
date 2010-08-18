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
  options.projection = 'EPSG:'+options.projection;
  options.sphericalMercator = true;
  var layer = new OpenLayers.Layer.GeoRSS(title, options.url, options);
  layer.styleMap = styleMap;
  return layer;
};
