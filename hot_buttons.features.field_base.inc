<?php
/**
 * @file
 * hot_buttons.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hot_buttons_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hot_button'
  $field_bases['field_hot_button'] = array(
    'active' => 1,
    'cardinality' => 5,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hot_button',
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
