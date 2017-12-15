# Switch
Drupal module that allows features to be switched on/off per node

# Creating Switches
Enable new switches by implementing `hook_switch_info()`

Example:
```
function my_module_switch_info() {
  return array(
    'my_switch' => array(
      'label' => 'Enable my feature',
      'entity_types' => array('node'),
    ),
  );
}
```

In your module, you can check if a switch is enabled using `switch_is_enabled()`

Example:
`switch_is_enabled('node', $node->nid, 'my_switch');`

# Configuring Switches
Switches can be enabled per content type at `/admin/structure/types`

# Using Switches
Switches will appear under the `Publishing options` on node forms.

# Permissions
Permissions can be managed per switch per entity type at `/admin/people/permissions`
