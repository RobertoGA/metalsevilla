<?php
/**
 * @file
 * grupo_artista.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function grupo_artista_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function grupo_artista_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function grupo_artista_node_info() {
  $items = array(
    'grupo_artista' => array(
      'name' => t('Grupo/Artista'),
      'base' => 'node_content',
      'description' => t('Artistas y grupos de música
'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => t('Para crear un grupo es necesario que seas el mánager del grupo que vas a crear.'),
    ),
  );
  return $items;
}
