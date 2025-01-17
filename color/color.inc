<?php

$info = array(

  // Available colors and color labels used in theme.
  'fields' => array(
    'base' => t('Base color'),
    'text' => t('Text color'),
    'body_background_color' => t('Body background color'),
    'topbar_background_color' => t('Topbar background color'),
    'topbar_text_color' => t('Topbar text color'),
    'header_background_color' => t('Header background color'),
    'menu_item_1_background_color' => t('Menu item #1 background color'),
    'menu_item_2_background_color' => t('Menu item #2 background color'),
    'menu_item_3_background_color' => t('Menu item #3 background color'),
    'menu_item_4_background_color' => t('Menu item #4 background color'),
    'navigation_background_color' => t('Navigation background color'),
    'navigation_text_color' => t('Navigation text color'),
    'navigation_text_color_hover' => t('Navigation text color - hover'),
    'navigation_text_color_active' => t('Navigation text color - active'),
    'tabroll_background_color_mobile' => t('Tabroll background color - mobile'),
    'link' => t('Link color'),
    'link_hover' => t('Label color hover'),
    'labels_background_color' => t('Label background color'),
    'labels_background_color_hover' => t('Label background color hover'),
    'labels_text_color' => t('Label text color'),
    'labels_text_color_hover' => t('Label text color hover'),
    'content_background_color' => t('Content background color'),
    'list_background_color' => t('List background color (IE8 fallback)'),
    'list_background_color_odd' => t('List item background color (odd)'),
    'list_background_color_even' => t('List item background color (even)'),
    'list_text_color' => t('List text color'),
    'footer_background_color' => t('Footer background color'),
    'footer_text_color' => t('Footer text color'),
    'footer_link_color' => t('Footer link color'),
    'footer_arrow_color' => t('Footer arrow color'),
    'bottom_background_color' => t('Bottom background color'),
    'facts_background' => t('Funny facts background color'),
    'facts_link' => t('Funny facts link color'),
    'facts_text' => t('Funny facts text color'),
    'default_button' => t('Default button'),
    'default_button_text' => t('Default button text color'),
    'default_button_hover' => t('Default button hover'),
    'default_button_gradient' => t('Default button gradient'),
    'default_button_gradient' => t('Default button gradient'),
    'popup_background' => t('Popup background'),
    'popup_text' => t('Popup text'),
    'carousel_background' => t('Carousel background'),
    'carousel_tab_background' => t('Carousel tab background'),
    'carousel_tab_active_background' => t('Carousel active tab background'),

  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Default'),
      'colors' => array(
        'base' => '#0072b9',
        'text' => '#494949',
        'body_background_color' => '#a49e90',
        'topbar_background_color' => '#d8d8d8',
        'topbar_text_color' => '#fffffa',
        'header_background_color' => '#a49e90',
        'menu_item_1_background_color' => '#a84598',
        'menu_item_2_background_color' => '#178498',
        'menu_item_3_background_color' => '#86a0c3',
        'menu_item_4_background_color' => '#c3be2c',
        'navigation_background_color' => '#000000',
        'navigation_text_color' => '#ffffff',
        'navigation_text_color_hover' => '#ffffff',
        'navigation_text_color_active' => '#ffffff',
        'tabroll_background_color_mobile' => '#a32e10',
        'link' => '#333333',
        'link_hover' => '#444444',
        'labels_background_color' => '#333333',
        'labels_background_color_hover' => '#444444',
        'labels_text_color' => '#fffffd',
        'labels_text_color_hover' => '#fafaf7',
        'content_background_color' => '#fffffe',
        'list_background_color' => '#ebebeb',
        'list_background_color_odd' => '#e8e8e8',
        'list_background_color_even' => '#f2f2f2',
        'list_text_color' => '#4c4c4c',
        'footer_background_color' => '#444442',
        'footer_text_color' => '#ffffff',
        'footer_link_color' => '#ffffff',
        'footer_arrow_color' => '#ffffff',
        'bottom_background_color' => '#191919',
        'facts_background' => '#a32e11',
        'facts_link' => '#ff6600',
        'facts_text' => '#fffffb',
        'default_button' => '#444443',
        'default_button_text' => '#fffff8',
        'default_button_hover' => '#1e1e1e',
        'default_button_gradient' => '#1e1e1f',
        'popup_background' => '#00cafd',
        'popup_text' => '#000003',
        'carousel_background' => '#d8d8d8',
        'carousel_tab_background' => '#7f7f7f',
        'carousel_tab_active_background' => '#b7b7b5',
      ),
    ),
    'classic' => array(
      'title' => t('Classic'),
      'colors' => array(
        'base' => '#0072b9',
        'text' => '#494949',
        'topbar_background_color' => '#000001',
        'topbar_text_color' => '#fffffa',
        'header_background_color' => '#00caff',
        'navigation_background_color' => '#fffffc',
        'navigation_text_color' => '#959594',
        'navigation_text_color_hover' => '#000002',
        'tabroll_background_color_mobile' => '#a32e10',
        'link' => '#00b7e7',
        'link_hover' => '#006681',
        'labels_background_color' => '#00cafe',
        'labels_background_color_hover' => '#00a7d2',
        'labels_text_color' => '#fffffd',
        'labels_text_color_hover' => '#fafaf7',
        'content_background_color_hover' => '#fffffe',
        'list_background_color' => '#ebebeb',
        'list_background_color_odd' => '#e8e8e8',
        'list_background_color_even' => '#f2f2f2',
        'list_text_color' => '#4c4c4c',
        'footer_background_color' => '#262626',
        'footer_text_color' => '#fffff9',
        'facts_background' => '#a32e11',
        'facts_link' => '#ff6600',
        'facts_text' => '#fffffb',
        'default_button' => '#444443',
        'default_button_text' => '#fffff8',
        'default_button_hover' => '#1e1e1e',
        'default_button_gradient' => '#1e1e1f',
        'popup_background' => '#00cafd',
        'popup_text' => '#000003',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/herlev.styles.css',
  ),

  // Color areas to fill (x, y, width, height).
  /*'fill' => array(
    'base' => array(0, 0, 760, 568),
    'link' => array(107, 533, 41, 23),
  ),*/

  'fill' => array(),

  'copy' => array(),

  // Gradient definitions.
  'gradients' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  //'preview_image' => 'color/preview.png',
  'preview_css' => 'color/preview.css',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
