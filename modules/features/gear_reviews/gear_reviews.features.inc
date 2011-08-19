<?php
/**
 * @file
 * gear_reviews.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function gear_reviews_node_info() {
  $items = array(
    'gear' => array(
      'name' => t('Gear'),
      'base' => 'node_content',
      'description' => t('base content type for reviewing gear.'),
      'has_title' => '1',
      'title_label' => t('Product'),
      'help' => '',
    ),
  );
  return $items;
}
