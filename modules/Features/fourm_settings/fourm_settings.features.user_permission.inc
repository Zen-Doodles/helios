<?php
/**
 * @file
 * fourm_settings.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function fourm_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer advanced forum
  $permissions['administer advanced forum'] = array(
    'name' => 'administer advanced forum',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'advanced_forum',
  );

  return $permissions;
}
