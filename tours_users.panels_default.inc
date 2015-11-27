<?php
/**
 * @file
 * tours_users.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function tours_users_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'my_activities';
  $mini->category = '';
  $mini->admin_title = 'My Activities';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47458b4c-f3bd-4ae5-b77b-1e2b78efa7d6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fdbde709-302c-4abe-a6a1-3d73bc458620';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add Activity',
      'title' => '',
      'body' => '<ul class="action-links"><li><a href="/admin/rooms/units/add/single_day_tour"><strong>Add Activity</strong></a></li></ul>',
      'format' => 'rich_text',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'add-activity',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fdbde709-302c-4abe-a6a1-3d73bc458620';
    $display->content['new-fdbde709-302c-4abe-a6a1-3d73bc458620'] = $pane;
    $display->panels['middle'][0] = 'new-fdbde709-302c-4abe-a6a1-3d73bc458620';
    $pane = new stdClass();
    $pane->pid = 'new-5f1bfd6d-3df8-4fd7-ba42-fbe2dbb9eb90';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'my_bookable_units_tours';
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
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5f1bfd6d-3df8-4fd7-ba42-fbe2dbb9eb90';
    $display->content['new-5f1bfd6d-3df8-4fd7-ba42-fbe2dbb9eb90'] = $pane;
    $display->panels['middle'][1] = 'new-5f1bfd6d-3df8-4fd7-ba42-fbe2dbb9eb90';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fdbde709-302c-4abe-a6a1-3d73bc458620';
  $mini->display = $display;
  $export['my_activities'] = $mini;

  return $export;
}
