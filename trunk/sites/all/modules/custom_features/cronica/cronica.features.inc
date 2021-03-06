<?php
/**
 * @file
 * cronica.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cronica_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function cronica_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cronica_node_info() {
  $items = array(
    'cronica' => array(
      'name' => t('Crónica'),
      'base' => 'node_content',
      'description' => t('Crónica de conciertos y festivales.
'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
