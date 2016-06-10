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
      'gsb:dimension5' => array(
        'value' => '',
      ),
      'gsb:dimension6' => array(
        'value' => '',
      ),
      'gsb:dimension7' => array(
        'value' => '',
      ),
      'gsb:dimension8' => array(
        'value' => '',
      ),
      'gsb:dimension9' => array(
        'value' => '',
      ),
      'gsb:dimension10' => array(
        'value' => '',
      ),
      'gsb:dimension11' => array(
        'value' => '',
      ),
      'gsb:dimension12' => array(
        'value' => '',
      ),
      'gsb:dimension13' => array(
        'value' => '',
      ),
      'gsb:dimension14' => array(
        'value' => '',
      ),
      'gsb:dimension15' => array(
        'value' => '',
      ),
      'gsb:dimension16' => array(
        'value' => '',
      ),
      'gsb:dimension17' => array(
        'value' => '',
      ),
      'gsb:dimension18' => array(
        'value' => '',
      ),
      'gsb:dimension19' => array(
        'value' => '',
      ),
      'gsb:dimension20' => array(
        'value' => '',
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
