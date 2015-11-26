<?php
/**
 * @file
 * tours_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tours_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tours_users_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function tours_users_default_profile2_type() {
  $items = array();
  $items['tour_owner'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "tour_owner",
    "label" : "Tour Owner",
    "weight" : "0",
    "data" : { "registration" : 0, "roles" : { "10" : "10" } },
    "rdf_mapping" : []
  }');
  return $items;
}
