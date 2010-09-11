; $Id$
;
; OpenLayers Demo Make File
; ----------------
; This is a make file for a site that demos the Drupal OpenLayers module
; specifically 


; Core version
; ------------
; Theres no reason to use the branch, but just specifying the 6.x
; part was not working correctly.
core = 6.x
projects[drupal][type] = "core"
projects[drupal][download][type] = "cvs"
projects[drupal][download][root] = ":pserver:anonymous:anonymous@cvs.drupal.org:/cvs/drupal"
projects[drupal][download][module] = "drupal"
projects[drupal][download][revision] = "DRUPAL-6-19"


; Projects
; --------
projects[views][subdir] = contrib
projects[cck][subdir] = contrib
projects[ctools][subdir] = contrib
projects[admin_menu][subdir] = contrib
projects[features][subdir] = contrib
projects[strongarm][subdir] = contrib
projects[devel][subdir] = contrib
projects[designkit][subdir] = contrib
projects[imageapi][subdir] = contrib
projects[imagecache][subdir] = contrib
projects[filefield][subdir] = contrib
projects[imagefield][subdir] = contrib
projects[jquery_update][subdir] = contrib
projects[jquery_ui][subdir] = contrib
projects[libraries][subdir] = contrib
projects[diff][subdir] = contrib
projects[token][subdir] = contrib
projects[pathauto][subdir] = contrib
projects[pathauto][subdir] = contrib
projects[geotaxonomy][subdir] = contrib
projects[mapbox][subdir] = contrib
projects[openlayers_geocoder][subdir] = contrib
projects[openlayers_proximity][subdir] = contrib


; OpenLayers
; --------
projects[openlayers][type] = module
projects[openlayers][download][type] = cvs
projects[openlayers][download][module] = contributions/modules/openlayers
projects[openlayers][download][revision] = DRUPAL-6--2
projects[openlayers][subdir] = contrib


; This Demo
; --------
projects[ol_dccph2010_demo][type] = module
projects[ol_dccph2010_demo][download][type] = git
projects[ol_dccph2010_demo][download][url] = git://github.com/zzolo/ol_dccph2010_demo.git
projects[ol_dccph2010_demo][subdir] = custom


; Themes
; --------
projects[tao][type] = theme
projects[tao][download][type] = git
projects[tao][download][url] = git://github.com/developmentseed/tao.git
projects[rubik][type] = theme
projects[rubik][download][type] = git
projects[rubik][download][url] = git://github.com/developmentseed/rubik.git


; Libraries
; --------
libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"
libraries[openlayers][download][type] = "get"
libraries[openlayers][download][url] = "http://openlayers.org/download/OpenLayers-2.9.1.zip"
libraries[openlayers][directory_name] = "openlayers"