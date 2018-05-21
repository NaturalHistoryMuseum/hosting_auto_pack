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
 * Implements hook_drush_command().
 */
function hosting_auto_pack_drush_help_alter(&$command) {
  if ($command['command'] == 'hosting-import') {
    $command['options']['human_name'] = 'Optional, but recommended Human-readable name.';
  }
}

/**
 * Implements hook_drush_context_import().
 */
function hosting_auto_pack_drush_context_import($context, &$node) {
  if ($context->type == 'server'){
    $human_name = drush_get_option('human_name');
    if($human_name){
      $node->human_name = $human_name;
    }
  }
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