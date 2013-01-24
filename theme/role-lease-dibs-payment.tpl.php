
<?php if(isset($dibs_payment['information'])) : ?>
  <?php print drupal_render($dibs_payment['information']); ?>
<?php endif; ?>
<?php if(isset($dibs_payment['payment_form'])) : ?>
  <?php print drupal_render($dibs_payment['payment_form']); ?>
<?php endif; ?>
