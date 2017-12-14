<?php

/**
 * @file
 * Hooks provided by switch.
 */

/**
 * Define a switch that can be turned on/off per entity.
 *
 * Switches can be used by calling switch_is_enabled().
 *
 * Example:
 * switch_is_enabled('node', $node->nid, 'my_switch');
 *
 * @return array
 */
function hook_switch_info() {
  return array(
    'my_switch' => array(
      'label' => 'Enable my feature',
      'entity_types' => array('node'),
    ),
  );
}
