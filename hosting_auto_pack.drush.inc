<?php
/
**
 * Implements hook_drush_command().
 */
function hosting_auto_pack_drush_command() {

  $commands['hosting-auto-pack'] = array(
    'description' => 'Create or update the pack server',
    'aliases' => array('hap'),
    'arguments' => array(
       'create' => 'Create or update pack server',
     ),
     'examples' => array(
       'drush hap create' => 'Create or update pack server".',
     ),
  );

  return $commands;
}

/**
 * Drush command logic.
 * drush_[COMMAND_NAME]().
 */
function drush_hosting_auto_pack($create) {
  // $opt1 = drush_get_option('opt1', 'N/A');
  // $tokens = array('@arg1' => $arg1, '@opt1' => $opt1);
  drush_print(dt('My custom command. Argument'));
}
