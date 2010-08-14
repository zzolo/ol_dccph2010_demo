// $Id$

/**
 * @file
 * Layer handler for osm layers
 */

/**
 * Openlayer layer handler for osm layer
 */
Drupal.openlayers.layer.osm_custom = function(title, map, options) {
  var styleMap = Drupal.openlayers.getStyleMap(map, options.drupalID);
  if (options.maxExtent !== undefined) {
    options.maxExtent = new OpenLayers.Bounds.fromArray(options.maxExtent) || new OpenLayers.Bounds(-20037508.34, -20037508.34, 20037508.34, 20037508.34);
  }
  var layer = new OpenLayers.Layer.OSM(title, options.url);
  layer.styleMap = styleMap;
  return layer;
};
