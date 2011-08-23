<?php
/**
 * Implement hook_install().
 *
 * Perform actions to set up the site for this profile.
 */
function helios_install() {
  include_once DRUPAL_ROOT . '/profiles/helios.profile';
  standard_install();
}

