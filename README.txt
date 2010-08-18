This is a Drupal module, make file, install script, and set of features
to create a demo site for the Drupal OpenLayers module.  Specifically
used for a presentation at DrupalCon Copenhagen 2010:

http://cph2010.drupal.org/sessions/mapping-drupal-openlayers


Install
-----------------------------
(in theory)

0) (Optional) Use the following script to download OSM
   tiles locally (helpful for a presentation).  You'll have
   to change values manually.
   
   php other/get_osm_tiles.php  

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
* In an ideal world, this would be a make file and install profile.
* Features have been altered so that they support dynamic paths better.



Credits
-----------------------------
* OpenLayers images and styles taken from Managing News (by Development Seed)
* Some icons used from http://code.google.com/p/google-maps-icons/