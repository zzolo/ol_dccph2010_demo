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
projects[drupal][download][revision] = "DRUPAL-6"


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


; OpenLayers
; --------
projects[openlayers][type] = module
projects[openlayers][download][type] = cvs
projects[openlayers][download][module] = contributions/modules/openlayers
projects[openlayers][download][revision] = DRUPAL-6--2


; This Demo
; --------
projects[tao][type] = module
projects[tao][download][type] = git
projects[tao][download][url] = git://github.com/developmentseed/ol_dccph2010_demo.git


; Themes
; --------
projects[tao][type] = theme
projects[tao][download][type] = git
projects[tao][download][url] = git://github.com/developmentseed/tao.git
projects[tao][type] = theme
projects[tao][download][type] = git
projects[tao][download][url] = git://github.com/developmentseed/rubik.git


; Libraries
; --------
libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery.ui-1.6.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"
; TODO: a more complete version of OL.js
;libraries[openlayers][download][type] = "get"
;libraries[openlayers][download][url] = "http://cloud.github.com/downloads/developmentseed/openlayers_slim/openlayers_slim-v1-5.tar.gz"
;libraries[openlayers][directory_name] = "openlayers"