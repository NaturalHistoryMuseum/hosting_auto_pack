<?php
/**
 * Implements hook_drush_command().
 */
function hosting_auto_pack_drush_command() {

  $commands['hosting-auto-pack'] = array(
    'description' => 'Create or update the pack server',
    'aliases' => array('hap'),
     'examples' => array(
       'drush hap create' => 'Create or update pack server".',
     ),
  );

  return $commands;
}

/**
 * Drush command logic.
 */
function drush_hosting_auto_pack() {
  if (hosting_auto_pack_create_pack()){
    drush_print(dt('Hosting auto pack created'));
  }else{
    drush_set_error('ERROR', 'Hosting autopack was not created.');
  }  
}