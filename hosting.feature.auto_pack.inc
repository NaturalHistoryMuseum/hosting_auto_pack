<?php

/**
 * Implements hook_hosting_feature().
 */
function hosting_auto_pack_hosting_feature(){
  return array(
    'auto_pack' => array(
      'title' => t('Automatic pack'),
      'description' => t('Creates an automatic pack server for application/apache servers that match a regex.'),
      'status' => HOSTING_FEATURE_DISABLED,
      'module' => 'hosting_auto_pack',
      'group' => 'optional'
    )
  );
}