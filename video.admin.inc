<?php 

function video_form($form, $form_state, $video){
	$form['name'] = array(
		'#type' => 'textfield',
		'#title' => t('Video name'),
		'#description' => t('Machine name'),
		'#default_value' => $video->name? $video->name: '',
		'#required' => true,
		'#weigth'   => -50,
	);
	$form['link'] = array(
		'#type' => 'textfield',
		'#title' => t('Video link'),
		'#description' => t('Video link youtube'),
		'#default_value' => $video->name? $video->name: '',
		'#required' => true,
		'#weigth'   => -50,
	);
//this line append newly created fields by UI to the existing entity
	field_attach_form('video', $video, $form, $form_state);

	$form['actions'] = array(
	'#type' => 'actions',
	'submit' => array(
		'#type'=> 'submit',
		'#value' => isset($video->id)? t('Save video'): t('Update video'),
		),
	);

}