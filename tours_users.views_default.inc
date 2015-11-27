<?php
/**
 * @file
 * tours_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tours_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'my_bookable_units_tours';
  $view->description = 'A list of bookable units';
  $view->tag = 'rooms';
  $view->base_table = 'rooms_units';
  $view->human_name = 'My Bookable Units (+Tours)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Activities';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own rooms_unit unpublished entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'unit_id' => 'unit_id',
    'base_price' => 'base_price',
    'bookable' => 'bookable',
    'unit_id_1' => 'unit_id_1',
    'edit_unit' => 'edit_unit',
    'delete_unit' => 'delete_unit',
    'operations' => 'operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'unit_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'base_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'bookable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'unit_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'edit_unit' => array(
      'align' => '',
      'separator' => '',
    ),
    'delete_unit' => array(
      'align' => '',
      'separator' => '',
    ),
    'operations' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty Message';
  $handler->display->display_options['empty']['area']['content'] = 'No bookable units have been created yet.';
  /* Relationship: Bookable Units: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'rooms_units';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['label'] = 'ID';
  /* Field: Bookable Units: Booking Unit Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Bookable Units: Base_price */
  $handler->display->display_options['fields']['base_price']['id'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['base_price']['field'] = 'base_price';
  $handler->display->display_options['fields']['base_price']['label'] = 'Base price';
  /* Field: Bookable Units: Bookable */
  $handler->display->display_options['fields']['bookable']['id'] = 'bookable';
  $handler->display->display_options['fields']['bookable']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['bookable']['field'] = 'bookable';
  /* Field: Bookable Units: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Owner';
  /* Field: Bookable Units: Link */
  $handler->display->display_options['fields']['link_unit']['id'] = 'link_unit';
  $handler->display->display_options['fields']['link_unit']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['link_unit']['field'] = 'link_unit';
  /* Field: Bookable Units: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Bookable Units: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
    'multi_day_tour' => 'multi_day_tour',
    'single_day_tour' => 'single_day_tour',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    9 => 0,
    8 => 0,
    5 => 0,
    10 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Bookable Units: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'listing' => 'listing',
    'multi_day_tour' => 'multi_day_tour',
    'single_day_tour' => 'single_day_tour',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['my_bookable_units_tours'] = $view;

  $view = new view();
  $view->name = 'tour_owner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'rooms_units';
  $view->human_name = 'Tour Owner Tab';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Bookable Units: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'rooms_units';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tour_owner' => 'tour_owner',
  );
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'profile';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['field_tour_owner_name']['id'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['table'] = 'field_data_field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['field'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_tour_owner_name']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_name']['alter']['text'] = '[field_tour_owner_name] <span class="glyphicon glyphicon-info-sign"></span>';
  $handler->display->display_options['fields']['field_tour_owner_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_name']['alter']['path'] = 'host/[pid]';
  $handler->display->display_options['fields']['field_tour_owner_name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_tour_owner_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['field_tour_owner_image']['id'] = 'field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['table'] = 'field_data_field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['field'] = 'field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_tour_owner_image']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tour_owner_image']['settings'] = array(
    'image_style' => 'blog_post_image',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Bio */
  $handler->display->display_options['fields']['field_tour_owner_bio']['id'] = 'field_tour_owner_bio';
  $handler->display->display_options['fields']['field_tour_owner_bio']['table'] = 'field_data_field_tour_owner_bio';
  $handler->display->display_options['fields']['field_tour_owner_bio']['field'] = 'field_tour_owner_bio';
  $handler->display->display_options['fields']['field_tour_owner_bio']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_tour_owner_bio']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_bio']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_tour_owner_telephone']['id'] = 'field_tour_owner_telephone';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['table'] = 'field_data_field_tour_owner_telephone';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['field'] = 'field_tour_owner_telephone';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_telephone']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Contextual filter: Bookable Units: Bookable units ID */
  $handler->display->display_options['arguments']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['arguments']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['arguments']['unit_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['unit_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['unit_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['unit_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['unit_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Bookable Units: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'single_day_tour' => 'single_day_tour',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'unit_id' => array(
      'type' => 'panel',
      'context' => 'entity:bean.delta',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Bookable Units: Bookable units ID',
    ),
  );
  $export['tour_owner'] = $view;

  $view = new view();
  $view->name = 'tour_profile_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Activity Owner Profile page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['field_tour_owner_name']['id'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['table'] = 'field_data_field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['field'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['field_tour_owner_image']['id'] = 'field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['table'] = 'field_data_field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['field'] = 'field_tour_owner_image';
  /* Contextual filter: Profile: Profile ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'profile';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';

  /* Display: Profile Left */
  $handler = $view->new_display('panel_pane', 'Profile Left', 'panel_pane_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['field_tour_owner_name']['id'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['table'] = 'field_data_field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['field'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Image */
  $handler->display->display_options['fields']['field_tour_owner_image']['id'] = 'field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['table'] = 'field_data_field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['field'] = 'field_tour_owner_image';
  $handler->display->display_options['fields']['field_tour_owner_image']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_tour_owner_image']['settings'] = array(
    'image_style' => 'blog_post_image',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Bio */
  $handler->display->display_options['fields']['field_tour_owner_bio']['id'] = 'field_tour_owner_bio';
  $handler->display->display_options['fields']['field_tour_owner_bio']['table'] = 'field_data_field_tour_owner_bio';
  $handler->display->display_options['fields']['field_tour_owner_bio']['field'] = 'field_tour_owner_bio';
  $handler->display->display_options['fields']['field_tour_owner_bio']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_bio']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['argument_input'] = array(
    'pid' => array(
      'type' => 'panel',
      'context' => 'entity:bean.delta',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: Profile ID',
    ),
  );

  /* Display: Profile Right */
  $handler = $view->new_display('panel_pane', 'Profile Right', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['id'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['field'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['relationship'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Profile: Website */
  $handler->display->display_options['fields']['field_tour_owner_site']['id'] = 'field_tour_owner_site';
  $handler->display->display_options['fields']['field_tour_owner_site']['table'] = 'field_data_field_tour_owner_site';
  $handler->display->display_options['fields']['field_tour_owner_site']['field'] = 'field_tour_owner_site';
  $handler->display->display_options['fields']['field_tour_owner_site']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_site']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_site']['alter']['text'] = '<span class="glyphicon glyphicon-globe"></span>  [field_tour_owner_site]';
  $handler->display->display_options['fields']['field_tour_owner_site']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_tour_owner_site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_site']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tour_owner_site']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Bookable Units: Bookable units ID */
  $handler->display->display_options['fields']['unit_id']['id'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['unit_id']['field'] = 'unit_id';
  $handler->display->display_options['fields']['unit_id']['relationship'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['fields']['unit_id']['label'] = '';
  $handler->display->display_options['fields']['unit_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['unit_id']['element_label_colon'] = FALSE;
  /* Field: Profile: Name */
  $handler->display->display_options['fields']['field_tour_owner_name']['id'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['table'] = 'field_data_field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['field'] = 'field_tour_owner_name';
  $handler->display->display_options['fields']['field_tour_owner_name']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_name']['alter']['text'] = '<span class="glyphicon glyphicon-envelope"></span> <a href="/enquiry?tour=[unit_id]&date=2015-12-16&time=7&people=0">Contact [field_tour_owner_name]</a>';
  $handler->display->display_options['fields']['field_tour_owner_name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_tour_owner_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Telephone */
  $handler->display->display_options['fields']['field_tour_owner_telephone']['id'] = 'field_tour_owner_telephone';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['table'] = 'field_data_field_tour_owner_telephone';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['field'] = 'field_tour_owner_telephone';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tour_owner_telephone']['alter']['text'] = '<span class="glyphicon glyphicon-earphone"></span>  [field_tour_owner_telephone]';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_telephone']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_tour_owner_telephone']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Profile: Facebook Page */
  $handler->display->display_options['fields']['field_tour_owner_facebook']['id'] = 'field_tour_owner_facebook';
  $handler->display->display_options['fields']['field_tour_owner_facebook']['table'] = 'field_data_field_tour_owner_facebook';
  $handler->display->display_options['fields']['field_tour_owner_facebook']['field'] = 'field_tour_owner_facebook';
  $handler->display->display_options['fields']['field_tour_owner_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_tour_owner_facebook']['alter']['text'] = '<span class="btn btn-block btn-social btn-twitter">
    <span class="fa fa-twitter"></span> [field_tour_owner_facebook]
  </span>
';
  $handler->display->display_options['fields']['field_tour_owner_facebook']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_tour_owner_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tour_owner_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tour_owner_facebook']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['argument_input'] = array(
    'pid' => array(
      'type' => 'panel',
      'context' => 'entity:bean.delta',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: Profile ID',
    ),
  );

  /* Display: Activities */
  $handler = $view->new_display('panel_pane', 'Activities', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['id'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['table'] = 'users';
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['field'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['relationships']['reverse_field_owner_rooms_unit']['relationship'] = 'user';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bookable Units: Link */
  $handler->display->display_options['fields']['link_unit']['id'] = 'link_unit';
  $handler->display->display_options['fields']['link_unit']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['link_unit']['field'] = 'link_unit';
  $handler->display->display_options['fields']['link_unit']['relationship'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['fields']['link_unit']['label'] = '';
  $handler->display->display_options['fields']['link_unit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['link_unit']['element_label_colon'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Bookable Units: Search/Featured Image */
  $handler->display->display_options['fields']['field_property_image']['id'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['table'] = 'field_data_field_property_image';
  $handler->display->display_options['fields']['field_property_image']['field'] = 'field_property_image';
  $handler->display->display_options['fields']['field_property_image']['relationship'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['fields']['field_property_image']['label'] = '';
  $handler->display->display_options['fields']['field_property_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_property_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_property_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Bookable Units: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'rooms_units';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = '[link_unit] ';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Bookable Units: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['relationship'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['fields']['field_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_address_locality']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address_locality']['alter']['text'] = '<span class="glyphicon glyphicon-map-marker"></span>  [field_address_locality]';
  $handler->display->display_options['fields']['field_address_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Bookable Units: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'rooms_units';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_owner_rooms_unit';
  $handler->display->display_options['filters']['type']['value'] = array(
    'multi_day_tour' => 'multi_day_tour',
    'single_day_tour' => 'single_day_tour',
  );
  $handler->display->display_options['argument_input'] = array(
    'pid' => array(
      'type' => 'panel',
      'context' => 'entity:bean.delta',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Profile: Profile ID',
    ),
  );
  $export['tour_profile_pages'] = $view;

  return $export;
}
