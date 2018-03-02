<?php
/**
 * @file
 * gsb_feature_google_tag_manager.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function gsb_feature_google_tag_manager_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'gsb:dimension1' => array(
        'value' => '[node:field-key-taxonomy:0]',
      ),
      'gsb:dimension2' => array(
        'value' => '[node:field-key-taxonomy:1]',
      ),
      'gsb:dimension3' => array(
        'value' => '[node:field-key-taxonomy:2]',
      ),
      'gsb:dimension4' => array(
        'value' => '[node:content-type:machine-name]',
      ),
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:field-editorial-summary]',
      ),
    ),
  );

  return $config;
}
