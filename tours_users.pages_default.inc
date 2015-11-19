<?php
/**
 * @file
 * tours_users.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function tours_users_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__tour-owner-dashboard';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Tour Owner Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'roomify-agency-dashboard property-owner-dashboard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'tour-owner-dashboard',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 10,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'middle' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6d93df95-11fc-4e55-b3bd-838039112d31';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fadf1276-141e-44fc-b166-e684483aba7c';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'dashboard_welcome';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Welcome',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'roomify-welcome-dashboard',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fadf1276-141e-44fc-b166-e684483aba7c';
    $display->content['new-fadf1276-141e-44fc-b166-e684483aba7c'] = $pane;
    $display->panels['top'][0] = 'new-fadf1276-141e-44fc-b166-e684483aba7c';
    $pane = new stdClass();
    $pane->pid = 'new-630ddd23-42c3-4d80-bc8f-d495e6d3faf0';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'my_bookable_units';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'My Listings',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'roomify-manage-listings',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '630ddd23-42c3-4d80-bc8f-d495e6d3faf0';
    $display->content['new-630ddd23-42c3-4d80-bc8f-d495e6d3faf0'] = $pane;
    $display->panels['top'][1] = 'new-630ddd23-42c3-4d80-bc8f-d495e6d3faf0';
    $pane = new stdClass();
    $pane->pid = 'new-5923ecf6-a71e-43bc-ad48-27a71d294c9a';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'bookings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'My Bookings',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5923ecf6-a71e-43bc-ad48-27a71d294c9a';
    $display->content['new-5923ecf6-a71e-43bc-ad48-27a71d294c9a'] = $pane;
    $display->panels['top'][2] = 'new-5923ecf6-a71e-43bc-ad48-27a71d294c9a';
    $pane = new stdClass();
    $pane->pid = 'new-b6570ba4-934e-49f6-a7f3-fb1339d5de95';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'rooms_sales_reports';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Bookings Report',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b6570ba4-934e-49f6-a7f3-fb1339d5de95';
    $display->content['new-b6570ba4-934e-49f6-a7f3-fb1339d5de95'] = $pane;
    $display->panels['top'][3] = 'new-b6570ba4-934e-49f6-a7f3-fb1339d5de95';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__tour-owner-dashboard'] = $handler;

  return $export;
}
