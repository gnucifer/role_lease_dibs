<?php


/**
 * Implements hook_rules_event_info()
 */
function role_lease_dibs_rules_event_info() {
  $items = array(
    'role_lease_dibs_payment_captured' => array(
      'label' => t('Role lease payment captured'),
      'group' => t('Role lease dibs'),
      'variables' => array(
        'role_lease' => array(
          'type' => 'role_lease', //ENTITY???
          'label' => t('Role lease'),
        ),
        'role_lease_type' => array(
          'type' => 'role_lease_type', //ENTITY???
          'label' => t('Role lease type'),
        ),
        'dibs_amount' => array(
          'type' => 'text',
          'label' => t('Formatted payment amount including currency'),
        ),
        'dibs_transaction_id' => array(
          'type' => 'text',
          'label' => t('The dibs transaction id'),
        ), 
      ),
      //'access callback' => 'role_lease_rules_integration_access',
    ),
  );
  return $items;
}
