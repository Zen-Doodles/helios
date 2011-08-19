<?php
/**
 * @file
 * ckeditor_configuration.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function ckeditor_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: customize ckeditor
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  return $permissions;
}
