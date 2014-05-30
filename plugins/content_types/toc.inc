<?php

/**
 * @file
 *
 * Parses the page for elements to create a TOC for.
 */

$plugin = [
  'title' => t("Table of Contents"),
  'description' => t('Creates a table of contents for selected elements.'),
  'category' => t('Custom'),
];

/**
 * Output function
 */
function toc_pane_toc_content_type_render($subtype, $conf, $panel_args, $context) {
  // Add the toc library
  $path = toc_pane_get_toc_path();
  drupal_add_js($path . '/toc.min.js');
  ctools_add_js('toc', 'toc_pane');

  $block = new stdClass();
  $block->content = '<div id="toc-pane"></div>';

  return $block;
}

function toc_pane_toc_content_type_edit_form($form, &$form_state) {
  return $form;
}
