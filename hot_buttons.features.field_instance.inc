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

  // Exported field_instance: 'field_collection_item-field_hot_button-field_button_link'
  $field_instances['field_collection_item-field_hot_button-field_button_link'] = array(
    'bundle' => 'field_hot_button',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a valid url and title for your button.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_button_link',
    'label' => 'Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 1,
        'insert_plugin' => 'raw_url',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_hot_button-field_button_size'
  $field_instances['field_collection_item-field_hot_button-field_button_size'] = array(
    'bundle' => 'field_hot_button',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Fancy larger or smaller buttons? Add <code>.btn-lg</code>, <code>.btn-sm</code>, or <code>.btn-xs</code> for additional sizes.</p>
<p><a href="http://getbootstrap.com/css/#buttons-sizes">Bootstrap: Button Sizes</a></p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_button_size',
    'label' => 'Size',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_hot_button-field_button_style'
  $field_instances['field_collection_item-field_hot_button-field_button_style'] = array(
    'bundle' => 'field_hot_button',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<a href="#" class="btn btn-xs btn-default">Default</a>
<a href="#" class="btn btn-xs btn-primary">Primary</a>
<a href="#" class="btn btn-xs btn-success">Success</a>
<a href="#" class="btn btn-xs btn-info">Info</a>
<a href="#" class="btn btn-xs btn-warning">Warning</a>
<a href="#" class="btn btn-xs btn-danger">Danger</a>
<a href="#" class="btn btn-xs btn-link">Link</a>
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_button_style',
    'label' => 'Style Option',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

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
  t('<a href="#" class="btn btn-xs btn-default">Default</a>
<a href="#" class="btn btn-xs btn-primary">Primary</a>
<a href="#" class="btn btn-xs btn-success">Success</a>
<a href="#" class="btn btn-xs btn-info">Info</a>
<a href="#" class="btn btn-xs btn-warning">Warning</a>
<a href="#" class="btn btn-xs btn-danger">Danger</a>
<a href="#" class="btn btn-xs btn-link">Link</a>
');
  t('<a href="http://getbootstrap.com/css/#buttons">Bootstrap Buttons</a>');
  t('<p>Fancy larger or smaller buttons? Add <code>.btn-lg</code>, <code>.btn-sm</code>, or <code>.btn-xs</code> for additional sizes.</p>
<p><a href="http://getbootstrap.com/css/#buttons-sizes">Bootstrap: Button Sizes</a></p>');
  t('Button');
  t('Link');
  t('Provide a valid url and title for your button.');
  t('Size');
  t('Style Option');

  return $field_instances;
}
