<?php
/**
 * @file
 * hot_buttons.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hot_buttons_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-hot_buttons-field_hot_button'
  $field_instances['fieldable_panels_pane-hot_buttons-field_hot_button'] = array(
    'bundle' => 'hot_buttons',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a href="http://getbootstrap.com/css/#buttons">Bootstrap Buttons</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_button',
    'label' => 'Button',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_hidden',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a href="http://getbootstrap.com/css/#buttons">Bootstrap Buttons</a>');
  t('Button');

  return $field_instances;
}
