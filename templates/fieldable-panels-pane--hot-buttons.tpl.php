<?php

if(isset($variables['content']['field_button_group'])){
  $btn_group = '';
  foreach($variables['content']['field_button_group']['#items'] as $item){
    $btn_group .= ' ' . $item['value'];
  }
  print '<div class="' . $btn_group .'" role="toolbar">';
}

print render($variables['content']['field_hot_button']);
if(isset($variables['content']['field_button_group'])){
  print '</div>';
}

?>
