<?php
function patterns_test_admin_settings() {

  $form['patterns_test_settings']['patterns_test_msg_01'] = array(
    '#type' => 'textfield',
    '#title' => t('Message One'),
    '#default_value'=> variable_get('patterns_test_msg_01', array('Hello World!')),
    '#description' => t('The text to be displayed in the main page.'),
  );
  $form['patterns_test_settings']['patterns_test_msg_02'] = array(
    '#type' => 'textfield',
    '#title' => t('Message Two'),
    '#default_value'=> variable_get('patterns_test_msg_02', array('Hello World!')),
    '#description' => t('The text to be displayed in the main page.'),
  );
  return system_settings_form($form);
}
