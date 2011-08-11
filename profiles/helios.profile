<?php
$task['machine_name'] = array(
  'display_name' => st('Human-readable task name'),
  'display' => TRUE,
  'type' => 'normal',
  'run' => INSTALL_TASK_RUN_IF_REACHED,
  'function' => 'function_to_execute',
);
?>