<?php
/**
 * @file
 * Contains switch.viewws.inc.
 */

/**
 * Implements hook_views_api().
 */
function switch_views_api() {
  return array(
    'api' => 3,
  );
}

/**
 * Implements hook_views_data().
 */
function switch_views_data() {
  $data = array();

  $data['switch']['table']['group'] = t('Switch');

  // Join the node table.
  $data['switch']['table']['join'] = array(
    'node' => array(
      'table' => 'switch_entity',
      'left_field' => 'nid',
      'field' => 'entity_id',
//      'extra' => array(
//        array('field' => 'type', 'value' => 'node', 'operator' => '='),
//      ),
    ),
  );

  $data['switch']['switch'] = array(
    'title' => t('Switch'),
    'group' => t('Switch'),
    'help' => t('Filters by node switch.'),
    'filter' => array(
      'handler' => 'views_handler_filter_switch',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_handlers().
 */
function switch_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'switch'),
    ),
    'handlers' => array(
      'views_handler_filter_switch' => array(
        'parent' => 'views_handler_field',
        'file' => 'views_handler_filter_switch.inc',
      ),
    ),
  );
}
