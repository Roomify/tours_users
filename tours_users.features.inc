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
  $items['tour_operator'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "tour_operator",
    "label" : "Tour Operator",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  $items['tour_owner'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "tour_owner",
    "label" : "Tour Owner",
    "weight" : "0",
    "data" : {
      "registration" : 0,
      "roles" : {
        "2" : "2",
        "6" : "6",
        "5" : "5",
        "7" : "7",
        "9" : "9",
        "4" : "4",
        "8" : "8",
        "3" : "3"
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
