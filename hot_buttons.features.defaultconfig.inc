<?php
/**
 * @file
 * hot_buttons.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_buttons_defaultconfig_features() {
  return array(
    'hot_buttons' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hot_buttons_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_buttons-field_hot_button'.
  $fields['fieldable_panels_pane-hot_buttons-field_hot_button'] = array(
    'field_config' => array(
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
    ),
    'field_instance' => array(
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
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a href="http://getbootstrap.com/css/#buttons">Bootstrap Buttons</a>');
  t('Button');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hot_buttons_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__hot_buttons';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__hot_buttons'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_buttons_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable hot_buttons'.
  $permissions['create fieldable hot_buttons'] = array(
    'name' => 'create fieldable hot_buttons',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hot_buttons'.
  $permissions['delete fieldable hot_buttons'] = array(
    'name' => 'delete fieldable hot_buttons',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hot_buttons'.
  $permissions['edit fieldable hot_buttons'] = array(
    'name' => 'edit fieldable hot_buttons',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
