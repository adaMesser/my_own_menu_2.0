<?php

/**
 *
 * @file
 * API for handling file uploads and server file management.
 */

/**
 * Page callback for ads page.
 *
 * @return string
 */
function my_menu_ads_page() {
  return t("Страница с объявлениями");
}

/**
 * Page callback for buy ads page.
 *
 * @return string
 */
function my_menu_buy_ads_page() {
  return t("Страница с объявлениями о покупке");
}

/**
 * Page callback for sell ads page.
 *
 * @return string
 */
function my_menu_sell_ads_page() {
  return t("Страница с объявлениями о продаже");
}

/**
 * Page callback for add ads page.
 *
 * @return string
 */
function my_menu_add_ads_page() {
  return t("Добавить объявление");
}

/**
 * Page callback for catalogue page.
 *
 * @return string
 */
function my_menu_catalogue_page() {
  return t("Каталог услуг");
}

/**
 * Page callback for catalogue dealership page.
 *
 * @return string
 */
function my_menu_catalogue_dealership_page() {
  return t("Каталог автосалонов");
}

/**
 * Page callback for catalogue shop page.
 *
 * @return string
 */
function my_menu_catalogue_shop_page() {
  return t("Каталог автомагазинов");
}

/**
 * @return mixed
 */
function my_menu_review_page() {
  return t("Добавить отзыв");
}

/**
 * @return mixed
 */
function my_menu_test_item_page() {
  return t("This is test item");
}

/**
 * @return mixed
 */
function my_menu_test_altered_page() {
  return t("This is altered test item");
}

/**
 * @return mixed
 */
function my_menu_tab_item_page() {
  return t("Страница с табами");
}

/**
 * @return mixed
 */
function my_menu_tab_item_second_page() {
  return t("Второй таб");
}

/**
 * @return mixed
 */
function my_menu_node_item($nid) {
  $node = node_load($nid);
  return t("Эта страница называется " . $node->title .
    ", и доступна по адресу http://localhost/drupal/node/" . $nid);
}

/**
 * @param $nid
 * @return mixed
 */
function node_page_title_from_nid($nid) {
  $node = node_load($nid);
  return $node->title;
}

/**
 * @return mixed
 */
function my_menu_items_collection_page() {
  $res = my_menu_items_collector();
  return t($res);
}