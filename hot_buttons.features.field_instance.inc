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
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_button_link',
    'label' => 'Link',
    'required' => 0,
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
      'url' => 'optional',
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
        'label' => 'hidden',
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
    'default_value' => array(
      0 => array(
        'value' => 'btn-default',
      ),
    ),
    'deleted' => 0,
    'description' => '<a href="#" class="btn btn-xs btn-default" disabled="true">Default</a>
<a href="#" class="btn btn-xs btn-primary" disabled="true">Primary</a>
<a href="#" class="btn btn-xs btn-success" disabled="true">Success</a>
<a href="#" class="btn btn-xs btn-info" disabled="true">Info</a>
<a href="#" class="btn btn-xs btn-warning" disabled="true">Warning</a>
<a href="#" class="btn btn-xs btn-danger" disabled="true">Danger</a>
<a href="#" class="btn btn-xs btn-link" disabled="true">Link</a>
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_button_style',
    'label' => 'Style',
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

  // Exported field_instance: 'fieldable_panels_pane-hot_buttons-field_button_group'
  $field_instances['fieldable_panels_pane-hot_buttons-field_button_group'] = array(
    'bundle' => 'hot_buttons',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Group your buttons together in a button group, learn more at <a href="http://getbootstrap.com/components/#btn-groups">Bootstrap: Button Groups</a>
<strong>If you select a button group size, do not select the individual buttons size</strong>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_button_group',
    'label' => 'Bootstrap Button Group',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
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
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_button',
    'label' => 'Bootstrap Button',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<a href="#" class="btn btn-xs btn-default" disabled="true">Default</a>
<a href="#" class="btn btn-xs btn-primary" disabled="true">Primary</a>
<a href="#" class="btn btn-xs btn-success" disabled="true">Success</a>
<a href="#" class="btn btn-xs btn-info" disabled="true">Info</a>
<a href="#" class="btn btn-xs btn-warning" disabled="true">Warning</a>
<a href="#" class="btn btn-xs btn-danger" disabled="true">Danger</a>
<a href="#" class="btn btn-xs btn-link" disabled="true">Link</a>
');
  t('<a href="http://getbootstrap.com/css/#buttons">Bootstrap Buttons</a>');
  t('<p>Fancy larger or smaller buttons? Add <code>.btn-lg</code>, <code>.btn-sm</code>, or <code>.btn-xs</code> for additional sizes.</p>
<p><a href="http://getbootstrap.com/css/#buttons-sizes">Bootstrap: Button Sizes</a></p>');
  t('Bootstrap Button');
  t('Bootstrap Button Group');
  t('Group your buttons together in a button group, learn more at <a href="http://getbootstrap.com/components/#btn-groups">Bootstrap: Button Groups</a>
<strong>If you select a button group size, do not select the individual buttons size</strong>');
  t('Link');
  t('Provide a valid url and title for your button.');
  t('Size');
  t('Style');

  return $field_instances;
}
