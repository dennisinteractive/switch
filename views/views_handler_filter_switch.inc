<?php

/**
 * @file
 * Definition of views_handler_filter_switch.
 */

/**
 * Filter handler for user roles.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_switch extends views_handler_filter_many_to_one {
  function get_value_options() {
    $switches = switch_get_info();

    $this->value_options = array();
    foreach ($switches as $switch => $switch_item) {
      $this->value_options[$switch] = check_plain(strip_tags($switch_item['label']));
    }
  }
}
