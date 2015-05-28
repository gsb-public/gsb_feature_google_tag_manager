(function ($) {
 /**
  * Behaviour for GSB Google Tag Manager.
  */
  Drupal.behaviors.gsb_feature_google_tag_manager = {
    attach: function (context, settings) {
      var gsb_dl = [];
      var dims = settings.gsb_feature_google_tag_manager_settings[0].dimensions;
      for (var key in dims) {
        var dim_obj = {};
        dim_obj['dimension'+key] = dims[key];
        gsb_dl.push(dim_obj);
      };
      dataLayer = dataLayer || [];
      dataLayer.push(gsb_dl);
    } // end attach
  }
})(jQuery);
