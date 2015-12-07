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
      'override_title_text' => 'Dashboard',
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
    $pane->pid = 'new-3672017b-8470-4150-90dd-0fd272dadbfe';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'my_activities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'My Hosted Activities',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3672017b-8470-4150-90dd-0fd272dadbfe';
    $display->content['new-3672017b-8470-4150-90dd-0fd272dadbfe'] = $pane;
    $display->panels['top'][1] = 'new-3672017b-8470-4150-90dd-0fd272dadbfe';
    $pane = new stdClass();
    $pane->pid = 'new-daa83852-a3ad-4de4-b96a-5a5c6fbccdbf';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'tour_attendance';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = 'daa83852-a3ad-4de4-b96a-5a5c6fbccdbf';
    $display->content['new-daa83852-a3ad-4de4-b96a-5a5c6fbccdbf'] = $pane;
    $display->panels['top'][2] = 'new-daa83852-a3ad-4de4-b96a-5a5c6fbccdbf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__tour-owner-dashboard'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function tours_users_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'host_profile_page';
  $page->task = 'page';
  $page->admin_title = 'Host Profile Page';
  $page->admin_description = '';
  $page->path = 'host/%name';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Profile: ID',
      'name' => 'entity_id:profile2',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_host_profile_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'host_profile_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'profile-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Profile (on profile.uid)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-profile2-user',
        'context' => 'argument_entity_id:profile2_1',
        'id' => 1,
      ),
    ),
    'name' => 'panel',
    'pathalias' => 'host/%name:field_tour_owner_name',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_sidebar_right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7954eb01-2f8a-4fba-9f72-662fca3705e7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-af4e2b86-231e-4874-bc53-11cc09dc3ae6';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'tour_profile_pages-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'host-activities',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af4e2b86-231e-4874-bc53-11cc09dc3ae6';
    $display->content['new-af4e2b86-231e-4874-bc53-11cc09dc3ae6'] = $pane;
    $display->panels['bottom'][0] = 'new-af4e2b86-231e-4874-bc53-11cc09dc3ae6';
    $pane = new stdClass();
    $pane->pid = 'new-5f14be4c-38aa-4480-b5c8-afe561990db9';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'tour_profile_pages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'host-top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5f14be4c-38aa-4480-b5c8-afe561990db9';
    $display->content['new-5f14be4c-38aa-4480-b5c8-afe561990db9'] = $pane;
    $display->panels['left'][0] = 'new-5f14be4c-38aa-4480-b5c8-afe561990db9';
    $pane = new stdClass();
    $pane->pid = 'new-4ffc8697-b266-42d9-916d-c515a6cc851c';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'tour_profile_pages-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'host-right',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4ffc8697-b266-42d9-916d-c515a6cc851c';
    $display->content['new-4ffc8697-b266-42d9-916d-c515a6cc851c'] = $pane;
    $display->panels['right'][0] = 'new-4ffc8697-b266-42d9-916d-c515a6cc851c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['host_profile_page'] = $page;

  return $pages;

}
