<?php
/**
 * @file
 * tours_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tours_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create rooms_booking entities of bundle tour_instance'.
  $permissions['create rooms_booking entities of bundle tour_instance'] = array(
    'name' => 'create rooms_booking entities of bundle tour_instance',
    'roles' => array(
      'tour_owner' => 'tour_owner',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'create rooms_unit entities of bundle multi_day_tour'.
  $permissions['create rooms_unit entities of bundle multi_day_tour'] = array(
    'name' => 'create rooms_unit entities of bundle multi_day_tour',
    'roles' => array(
      'tour_owner' => 'tour_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'create rooms_unit entities of bundle private_single_day_tour_slot'.
  $permissions['create rooms_unit entities of bundle private_single_day_tour_slot'] = array(
    'name' => 'create rooms_unit entities of bundle private_single_day_tour_slot',
    'roles' => array(
      'tour_owner' => 'tour_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'create rooms_unit entities of bundle single_day_tour'.
  $permissions['create rooms_unit entities of bundle single_day_tour'] = array(
    'name' => 'create rooms_unit entities of bundle single_day_tour',
    'roles' => array(
      'tour_owner' => 'tour_owner',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'create rooms_unit entities of bundle single_day_tour_slot'.
  $permissions['create rooms_unit entities of bundle single_day_tour_slot'] = array(
    'name' => 'create rooms_unit entities of bundle single_day_tour_slot',
    'roles' => array(
      'tour_owner' => 'tour_owner',
    ),
    'module' => 'rooms_unit',
  );

  return $permissions;
}
