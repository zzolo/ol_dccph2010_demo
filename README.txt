This is a Drupal module, make file, install script, and set of features
to create a demo site for the Drupal OpenLayers module.


Install
-----------------------------
(in theory)

1) Make build with drush:

   drush make ol_dccph2010_demo.make <your_directory>

2) Run through Drupal install

3) Enable modules, features, and other things with drush script:

   bash ol_dccph2010_demo.drush '<optional_url_for_local_tiles>'
   
   The above script is very basic and depending on how you have
   drush set up, you may to point the $DRUSH variable to another
   path.
   
   You can also put in an optional OSM template URL for the layer
   that is used by default.  This is helpful if you want a
   completely local demo.  Make sure to use single quotes for it:
   bash ol_dccph2010_demo.drush 'http://localhost/osm/${z}/${x}/${y}.png'



Notes
-----------------------------
In an ideal world, this would be a make file and install profile.



Credits
-----------------------------
OpenLayers images and styles taken from Managing News (by Development Seed)